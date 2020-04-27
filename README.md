
# What is working and what is not

* I have to test if Demon Hunter is correctly detected and stored to profile
* Open profile is not working
* Hearhstone Detection is broken on MacOS


# Build Dependencies

* Qt 5.7 (for now)
* Ruby (any stable version)
* (OS X) Sparkle
* (Windows) WinSparkle

## MacOS

```
brew install qt5
brew link qt5 --force
```

* Install [Sparkle](http://sparkle.andymatuschak.org/) 
 * Move _Sparkle.framework_ to ``/Library/Frameworks``.

## Windows

* Install [Ruby](https://rubyinstaller.org/downloads/)
* Install [Qt](http://qt-project.org/downloads) 
 * I use the Qt libraries for Windows VS 2013. Make sure to choose 32 bit under Windows.
* Install [WinSparkle](https://github.com/vslavik/winsparkle) 
 * Clone the repository and build the library, for example with VS 2013. The precompiled releases are ancient. Make sure to build 32 bit.

# Build Instructions

## Mac OS X

```
qmake
make
```

## Windows

* Add Qt, VS 2013 and WinSparkle to your system path.
* Initialize the environment variables:
 * call qtenv2.bat (default location: ..\Qt\5.5\msvc2013\bin\qtenv2.bat)
 * call vcvarsall.bat (default location: ..\VS2013\VC\vcvarsall.bat)

```
qmake
nmake
```

The resulting binary can be found in the ``build`` subfolder.

# License

GNU Lesser General Public License (LGPL) Version 2.1.

See [LICENSE](LICENSE).

