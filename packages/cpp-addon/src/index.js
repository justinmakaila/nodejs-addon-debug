import binding from "bindings";
const addon = binding("addon-debug");

const echo = addon.echo;

export { echo };
export default addon;
