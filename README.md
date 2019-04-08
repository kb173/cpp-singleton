# cpp-singleton

Easy to use static Singleton for any C++ class.

Developed with [Mesinger](https://github.com/mesinger).

## Usage

In the class `MyClass` which you want to turn into a Singleton, make the constructor protected and add Singleton as a friend class:
`friend class Singleton<MyClass>;`

Get the object using `Singleton<MyClass>::getInstance()`!
