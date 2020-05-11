#include <iostream>

bool isPalindrome(const std::string& text)
{
    auto first = text.begin();
    auto last = text.end();
    last--;
    
    while(first<last){
        if(*first!=*last){
            return false;
        } 
        first++;
        last--;
    }
    return true;
}

int main()
{
    std::cout<<std::boolalpha<<isPalindrome("ala")<<'\n';
    std::cout<<std::boolalpha<<isPalindrome("kajak")<<'\n';
    std::cout<<std::boolalpha<<isPalindrome("kuka")<<'\n';
    std::cout<<std::boolalpha<<isPalindrome("neveroddoreven")<<'\n';
    std::cout<<std::boolalpha<<isPalindrome("Ala ma kota")<<'\n';
    std::cout<<std::boolalpha<<isPalindrome("abacada")<<'\n';
    
    return 0;
}
