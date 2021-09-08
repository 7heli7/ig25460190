#include <iostream> 
using namespace std; 
  
namespace first 
{ 
    int val = 500; // Variable created inside namespace
} 
  
int main() 
{ 
    int val = 200; // Local variable 
  
    // namespace variables can be accessed from 
    // outside the namespace using the scope operator :: 
    cout << first::val << '\n';  
  
    return 0; 
}

