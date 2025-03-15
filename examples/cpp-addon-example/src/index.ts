import { echo } from "cpp-addon";
import * as addon from "cpp-addon";
import addonDefault from "cpp-addon";

const main = () => {
  console.debug("echo fn:", echo("Hello from Node.js!"));
  console.debug("composite import:", addon.echo("Hello from Node.js!"));
  console.debug("default import:", addonDefault.echo("Hello from Node.js!"));

  process.exit(0);
};

main();
