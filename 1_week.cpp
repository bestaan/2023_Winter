#include <iostream> // iostream이라는 헤더를 포함(include)

using namespace std; // 네임스페이스 설명 std::cout // 밑에서 std:: 생략할테니 컴파일러가 알아서 찾아라

int main() // entry point 기본값으로 사용
{
    // 주석(comment) 다는 방법

    cout << "Hello, World!" << endl;
    // printf("Hello World!!! by printf"); // C언어 에서의 출력방식

    char user_input[100];
    cin >> user_input;
    cout << user_input;

    return 0;
}
