#include <cstddef>

int main() {
    char* buffer = new char[4]{'d', 'e', 'm', 'o'};
    buffer[4] = '!';
    const int result = buffer[0] == 'd' ? 0 : 1;
    delete[] buffer;
    return result;
}
