# cpp-singleton

Easy to use static Singleton for any C++ class.

Developed with [mesinger](https://github.com/mesinger).

## Usage

In the class `MyClass` which you want to turn into a Singleton, add following line:
```c++
MAKE_SINGLETON(MyClass)
```

Get the object using:
```c++
Singleton<MyClass>::getInstance()
```
