{
  "targets": [
    {
      "target_name": "addon-debug",
      "sources": [
        "src/binding.cpp",
      ],
      "defines": [
        "NAPI_DISABLE_CPP_EXCEPTIONS",
      ],
      "include_dirs": [
        "<!(node -p \"require('node-addon-api').include_dir\")",
      ]
    }
  ]
}
