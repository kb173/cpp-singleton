#pragma once

#include <memory>

template<class T>
class Singleton {
private:
    static std::unique_ptr<T> instance;

public:
    static T *getInstance();
};


template<class T>
std::unique_ptr<T> Singleton<T>::instance{new T()};


template<class T>
T *Singleton<T>::getInstance() {
    return instance.get();
}

#define MAKE_SINGLETON(cls) friend class Singleton<cls>;\
							protected: \
								cls() = default;\
							public:
