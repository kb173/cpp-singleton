#ifndef KB173_SINGLETON_H
#define KB173_SINGLETON_H


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


#endif //KB173_SINGLETON_H

