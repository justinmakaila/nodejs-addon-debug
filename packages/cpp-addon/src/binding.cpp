#include <napi.h>

/**
 * Parses the first argument and returns it
 */
Napi::Value Echo(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  std::string str = info[0].As<Napi::String>().Utf8Value();

  return Napi::String::New(env, str.c_str());
}

/**
 * Module registration
 */
Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(Napi::String::New(env, "echo"), Napi::Function::New(env, Echo));
  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init);