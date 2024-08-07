

# NOTE
> Skip this guide if you are using CLion on your own machine during the
> bootcamp.
>
> You only need to reference this guide if you plan on using the computers
> in the lab during the bootcamp.

# Setting up VS Code IDE on Codespaces

This guide will show you how to run a cloud instance of Visual Studio Code 
(VS Code) using a GitHub feature called Codespaces.  This will allow you to 
edit and run code on VS Code within a browser window.


# Before you start

It would be helpful to make sure you have
a [GitHub account](https://github.com/signup) already created.

You can use either a personal or school email address with your GitHub account.

Once you have cloned the repository
(see [3 - Clone Bootcamp Repository](3%20-%20Clone%20Bootcamp%20Repository.md)),
click on

**"Code" &rarr; "Codespaces" &rarr; "+"**

![img.png](_md_images/Codespaces.png)

This will open a new browser tab with a cloud instance of Visual Studio Code.

![img.png](_md_images/visual_studio_code_cloud.png)


# Install CMake Tools Extension

You will need to install the CMake plugin for Visual Studio Code.  This 
plugin simplifies the compile and run process.

If you click on the CMakelist.txt file in the explorer, VS Code will prompt 
you to install the `CMake Tools` extension.  Click `Install` to install the 
CMake Tools extension.

![img_1.png](_md_images/CMake_Tools_Install.png)

After it is installed, click the CMake Tools icon on the left menu.

![img_2.png](_md_images/CMake_Tools_Icon.png)

Select the `Clang` compiler.

![img_3.png](_md_images/CMake_Tools_Config_Compiler.png)

> For more information about CMake and visutal studio code, you can also 
> check the following resource:
> 
> https://code.visualstudio.com/docs/cpp/cmake-linux

# Install C/C++ Extension Pack

The C/C++ Extension Pack provides VS Code the ability to autocomplete 
functions and highlight code.  When you open a `.cpp` file for the first 
time, VS Code will prompt you to install the extension.  Click `Install` to 
install the extension pack. 

![img_4.png](_md_images/VS_Code_Cpp_Pack.png)