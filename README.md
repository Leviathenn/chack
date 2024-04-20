
# Credits

** Warning! Middle click all Blue text in this document **

Made By[ BioShot](https://github.com/BioShot)




# Building



** Warning! This program has been built for the [Windows Operating System](https://en.wikipedia.org/wiki/Microsoft_Windows) and for the [Windows Operating System](https://en.wikipedia.org/wiki/Microsoft_Windows) Only. There Is/Will not be support for the [Linux](https://en.wikipedia.org/wiki/Linux) & [MacOs](https://en.wikipedia.org/wiki/MacOS) / [Darwin](https://en.wikipedia.org/wiki/Darwin_(operating_system)) [Operating Systems](https://en.wikipedia.org/wiki/Operating_system). No [OS App Ports](https://www.zdnet.com/article/how-to-run-a-windows-app-on-linux-with-wine/) are available and never be available without a [Virtual Machine](https://en.wikipedia.org/wiki/Virtual_machine). ** 

** WARNING I WILL NOT BE ACCEPTING README CHANGES! OR SUGGESTIONS **

To Build this project you must have [Visual Studio 2022](https://c2rsetup.officeapps.live.com/c2r/downloadVS.aspx?sku=community&channel=Release&version=VS2022&source=BioShotChack) along with the C/C++ Developer tools(Which can be install with [Visual Studio 2022](https://c2rsetup.officeapps.live.com/c2r/downloadVS.aspx?sku=community&channel=Release&version=VS2022&source=BioShotChack))

** Warning! This can ONLY be built with the [Visual Studio](https://c2rsetup.officeapps.live.com/c2r/downloadVS.aspx?sku=community&channel=Release&version=VS2022&source=BioShotChack) C/C++ Compiler! **


It will return this [error](https://github.com/BioShot/chack/assets/86807700/a8e5518c-6843-4543-b362-8c4b1da5d5f8)(Built with [gcc](https://sourceforge.net/projects/mingw-w64/files/latest/download)).




![gcrrer](https://github.com/BioShot/chack/assets/86807700/a8e5518c-6843-4543-b362-8c4b1da5d5f8)
If you would like the full [Error](https://github.com/BioShot/chack/assets/86807700/a8e5518c-6843-4543-b362-8c4b1da5d5f8), Please click [Here](https://ccpt.bioshot.repl.co).


# x64

```bash
   "%VSINSTALLDIR%\Msbuild\Current\Bin\MSBuild.exe" chack.sln /p:Configuration=Debug /p:Platform="x64"

```
 
# x86

```bash
   "%VSINSTALLDIR%\Msbuild\Current\Bin\MSBuild.exe" chack.sln /p:Configuration=Debug /p:Platform="x86"

```

# arm64 & arm32

Unfortunately I was not able to find a way to build [This Project](https://github.com/BioShot/chack) with the [arm64](https://en.wikipedia.org/wiki/ARM_architecture_family) architecture.

# amd64 & arm32 
 Unfortunately I was not able to find a way to build [This Project](https://github.com/BioShot/chack) with the [amd](https://en.wikipedia.org/wiki/AMD) architecture.


# Errors / Cons
Can only read one string. Spaces for some reason don't work. (Lines [111 - 158](https://github.com/BioShot/chack/blob/69ea89234bf2815151ced5c18de006a7b47b92fe/chack.cpp#LL111C1-L158C17))

I wrote this enire documentation by my self.


Loop count broken for some reason. It was working earlier but I guess it doesn't anymore. (Lines [99 - 144](https://github.com/BioShot/chack/blob/69ea89234bf2815151ced5c18de006a7b47b92fe/chack.cpp#LL99C1-L144C25))

Exit text not working. Can't get it working. (Lines [115 - 117](https://github.com/BioShot/chack/blob/main/chack.cpp#LL115C13-L117C14))

# Conclusion

This was a really fun project to work on! This was my first real c++ project. I will start to add more features along the way but any fixes to the edit text will be appreatiated. I don't copy your code so if my feature is added and you did it. chances are I didn't see it. So don't say I copied it. But yeah, Enjoy! ~Leviathenn
