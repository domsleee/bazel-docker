#include <iostream>

#include "assignments/wl/lexicon.h"
#include "assignments/wl/word_ladder.h"

template<typename ...Args>
auto sum2(Args ...args) { 
    return (args + ...);
}

int main() {
  auto lexicon = GetLexicon("assignments/wl/words.txt");

  // TODO(students): Replace this with your code
  for (const auto& word : lexicon) {
    std::cout << word << sum2(1,2,3) << '\n';
  }
}
