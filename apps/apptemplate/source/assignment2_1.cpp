#include <iostream>
#include <iterator>
#include <list>

template <typename T>
class list_wrapper
{
  public:
    std::list<T> my_list;
    std::list<T>::iterator it = my_list.begin();
    
    list_wrapper()
    {
      for(int i= 1; i<= 100; i++)
      {
        my_list.push_back(i);
      }
    }
    
    void find(T search_for)
    {
      it= my_list.begin();
      T temp;
      
      for(auto x : my_list)
      {
        advance(it, 1);
        
        if (*it== search_for)
        {
          temp= *it;
          break;
        }
      }
      
      my_list.erase(it);
      my_list.push_front(temp);
    }
  
    void print_list()
    {
      it= my_list.begin
        
      for(auto x : my_list)
      {
        std::cout<<*it<<"\t";
        advance(it, 1);
      }
    }
};

int main()
{
  list_wrapper<int> int_list;
  int_list.find(47);
  int_list.find(62);
  int_list.find(76);
  
  int_list.print_list();
  
  return 0;
}
