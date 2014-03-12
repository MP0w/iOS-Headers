iOS-Headers
============

iOS 5.0/5.1/6.0/6.1/7.0 Headers of All Frameworks (private and not) + SpringBoard

The Compare_Latest Folder contain the latest SDK and older are tagged so you can compare, for example go in SBMediaController.h and compare iOS 7 with iOS 5 using the tags! 

For example to compare headers of different iOS version with a GUI, try use this http://patricksan.com/post/20360521728/using-opendiff-with-git-mac-osx to redirect "git diff" to the Apple's FileMerge (opendiff) included in XCode
Now you can run
```shell
git diff 6.0 6.1 ./Compare_Latest/SpringBoard/SBMediaController.h
```
