# Miku on OpenCV
![Screenshot_14](https://user-images.githubusercontent.com/61770052/134467102-41ec3285-fe34-4ce8-91f2-4e3a3dd6c4df.jpg)
Display HatsuneMiku using OpenCV, written in C++ & Python.<br>
Created to test the operation of WSLg.
## Guide
### Clone
``` shell
$ git clone https://github.com/nashinium/Miku-on-OpenCV
```
### Build C++ file & Execute (on WSL2)
```shell
$ cd Miku-on-OpenCV
$ g++ src/main.cpp `pkg-config --cflags --libs opencv4`
$ ./a.out 
```
### Run Python script
```shell
$ cd Miku-on-OpenCV/src
$ python3 PicMiku.py
```
