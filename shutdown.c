#include <stdlib.h>

int main() {
  
    int result = system("shutdown /s /t 0");
    

    if (result != 0) {
        return 1; 
    }

    return 0; 
}

