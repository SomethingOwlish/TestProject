
#include <vector>
#include <string>
#include <iostream>


std::string StringMaker(const std::string& word){
    char chars[256]{};
    char reseters[2]{'(', ')'};

    for (unsigned char c: word){
        auto idx = std::tolower(c);
        chars[idx] = reseters[chars[idx]/'('];
    }

    std::string result;
    auto out = std::back_inserter(result);
    for (unsigned char c: word){
        *out = chars[std::tolower(c)];
    }
    return result;
}

int main() {
    std::string TestTaskString;
    std::cout << "Print your word";
    std::cin >> TestTaskString;
    std::string Answer = StringMaker(TestTaskString);
    std::cout << Answer;
    return 0;
}
