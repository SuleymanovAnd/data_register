#include <iostream>
#include <vector>

template<typename T1,typename T2>
struct KeyAndValue {
    T1 key;
    T2 value;
};

template<typename T1,typename T2>
class Registry {
std::vector <KeyAndValue<T1,T2>> registry;
public:

    Registry(){}

    void add (T1 key, T2 value){
        KeyAndValue<T1,T2> temp = {key,value};
        registry.push_back(temp);
    }


    void remove (T1 key){
            int j = 0;
            for( auto i = registry.begin() ; i < registry.end(); i++){
                KeyAndValue<T1,T2> temp;
                temp = registry[j];
                if (temp.key == key) {
                    registry.erase(i);
                    j--;
                    i--;
                }
                j++;
            }

    }

    void print (){
        for (int i = 0; i < registry.size(); i++){
            KeyAndValue<T1,T2> temp;
            temp = registry[i];
            std::cout << temp.key << " - " << temp.value << std::endl;
        }
    }


    std::vector<T2> find (T1 key){
        std::vector <T2> values;
        for (int i = 0; i < registry.size(); i++){
            KeyAndValue<T1,T2> temp;
            temp = registry[i];
            if (temp.key == key) {values.push_back(temp.value);}
        }
        return values;
    }

};