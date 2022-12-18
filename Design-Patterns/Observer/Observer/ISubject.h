#pragma once

#include "IObserver.h"

#include <vector>
#include <string>
#include <iostream>

class ISubject {
 public:
  virtual ~ISubject(){};
  virtual void subscribe(IObserver *observer) = 0;
  virtual void unsubscribe(IObserver *observer) = 0;
  virtual void notify() = 0;
};
