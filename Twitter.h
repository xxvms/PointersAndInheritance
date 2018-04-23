//
// Created by xxvms on 08/04/18.
//

#ifndef SECTION5BUILD_CLASSES_TWITTER_H
#define SECTION5BUILD_CLASSES_TWITTER_H

#include "Person.h"
#include <string>

class Twitter : public Person {
private:
  std::string TwitterHandle;

public:
  Twitter(std::string first, std::string last, int arbitrary,
          std::string handle);
  ~Twitter() = default;
  std::string getName() const;
};

#endif // SECTION5BUILD_CLASSES_TWITTER_H
