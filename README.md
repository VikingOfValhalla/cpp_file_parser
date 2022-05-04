# C++ File Parser  
__Compilation:__ `main.cpp`  
__Code Author:__ `VikingOfValhalla`  
__Purpose:__ To remove comments from files for easier reading. This program will be most useful for config files, or files that have a large amount of comments that you need to keep.  

__Example Syntax:__  
`./executeable file_name_to_remove_comments "Comment Deliniator"`  
__Actual Input:__  
`./main test_file.cpp "//"` 

__Example File to Output:__  
```
#include <iostream>

int main()
{
    // this is a comment
    std::cout << "This is a test" << std::endl;
    return 0;
}
```

__Example File Output:__
```
#include <iostream>

int main()
{
    std::cout << "This is a test" << std::endl;
    return 0;
}
```
