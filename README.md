# vscode-cpp11-demo

This project is a minimal example of writing and debugging C++ code based on [cpp11](https://cpp11.r-lib.org) in VSCode.

For writing and debugging [Rcpp](http://www.rcpp.org/) in VSCode, you may
go to [vscode-rcpp-demo](https://github.com/renkun-ken/vscode-rcpp-demo).

## Preview

* Code editing

![Code editing](https://user-images.githubusercontent.com/4662568/112485133-8e3ea800-8db5-11eb-9346-5086623204d5.gif)

* Debugging

![Debugging](https://user-images.githubusercontent.com/4662568/112485554-060cd280-8db6-11eb-803e-8574dd9748a8.gif)

## Configuration

Before configuration, install VSCode [C/C++ extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

### Code editing

For C/C++ source code editing, only `.vscode/c_cpp_properties.json` is needed. When the proper paths of included headers are
provided, the full-featured C/C++ editing features including auto-completion, hover, definition, type inference, etc. will work.
Source code editing does not require that the code is in a package.

In this repo, `c_cpp_properties.json` is supposed to work with R 4.0 under Ubuntu 16.04 or above. You may need to alter the
paths according to your system and C/C++ dependencies of your package.

For example, if your package depends on [RcppArmadillo](https://github.com/RcppCore/RcppArmadillo), you may run the following R
code to determine the include path:

```r
RcppArmadillo:::CxxFlags()
```

Then you may add the following path to `includePath`:

```text
${env:HOME}/R/x86_64-pc-linux-gnu-library/4.0/RcppArmadillo/include
```

For more code editing features, please visit [Edit C++ in Visual Studio Code](https://code.visualstudio.com/docs/cpp/cpp-ide).

### Debugging

Rcpp debugging is easy to configure when the code is in an R package that uses Rcpp like how this repo is organized.

Since `R` is not a binary executable but a bash script in which required environment variables are setup to start an R session,
we also need to setup those environment variables for the debugger to run the R session.

`.vscode/debug.R` and `.vscode/tasks.json` are the code to capture those environment variables and to run before debugging.
You may need, initially, to run twice in debugging mode before environment variables are properly picked up in `.vscode/.env`

`.vscode/launch.json` defines the debugger configuration which in this repo works for R 4.0 under Ubuntu 16.04 or above.

For more debugging features, please visit [Debug C++ in Visual Studio Code](https://code.visualstudio.com/docs/cpp/cpp-debug).

## More information

When properly configured, the Rcpp development environment is full-featured as general C/C++ development in VSCode.

Please visit [C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp) for more information.
