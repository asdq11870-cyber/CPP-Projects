#include <iostream>

class StoringURL{
    private:
        std::string protocal;
        std::string resource;
        std::string seperator;
    public:
        StoringURL(std::string url){
            int colon_pos = url.find(":");
            seperator = url.substr(colon_pos, colon_pos + 3);
            protocal = url.substr(0, colon_pos);
            resource = url.substr(colon_pos + 3, url.length()+1);
        }
        std::string getProtocal(){
            return protocal;
        }
        std::string getResource(){
            return resource;
        }
        std::string getURL(){
            return protocal + seperator + resource;
        }
};


int main(){
    StoringURL url("http://www.example.com/index.html");
    std::cout << "The protocal is " << url.getProtocal() << std::endl;
    std::cout << "The resource is " << url.getResource() << std::endl;
    std::cout << "The full URL is " << url.getURL() << std::endl;
    return 0;
}
