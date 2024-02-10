#include <iostream>
#include <string>

template<typename T>
bool isGreater(const T list[], const T list2[], int size1, int size2)
{
  int verified = 0;

  int i = 0;
  for(i = 0; i < size1; i++)
  {   
    int j = 0;
    for(j = 0; j < size2; j++)
    {
      if(list[i] < list2[j])
      {
        verified++;
        break;
      }
    }
    
    if(verified == size2)
    {
      break;
    }
  }
  
  if(verified == size2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main() 
{
  // int Run where list2 has all greater numbers.
  int l1[4] = {1, 2, 3, 4};
  int l2[2] = {2, 4};

  std::cout << "Passing in two int arrays, l1 and l2: " << isGreater(l1, l2, 4, 2) << std::endl;

  // int Run where list2 has not all greater numbers.
  int l3[3] = {4, 5, 6};
  int l4[3] = {1, 5, 3};

  std::cout << "Passing in two int arrays, l3 and l4: " << isGreater(l3, l4, 3, 3) << std::endl;


  std::cout << std::endl;

  
  // double Run where list2 has all greater numbers.
  double l5[4] = {3.2, 1.6, 2.2, 0.4};
  double l6[2] = {6.5, 2.7};

  std::cout << "Passing in two double arrays, l5 and l6: " << isGreater(l5, l6, 4, 2) << std::endl;

  // double Run where list2 has not all greater numbers.
  double l7[3] = {7.8, 4.5, 2.7};
  double l8[3] = {3.4, 0.9, 5.3};

  std::cout << "Passing in two double arrays, l7 and l8: " << isGreater(l7, l8, 3, 3) << std::endl;

  
  std::cout << std::endl;

  
  // string Run where list2 has all greater numbers.
  std::string l9[2] = {"Able", "Carry"};
  std::string l10[2] = {"Merry", "Xylophone"};

  std::cout << "Passing in two double arrays, l9 and l10: " << isGreater(l9, l10, 2, 2) << std::endl;

  // string Run where list2 has not all greater numbers.
  std::string l11[2] = {"Nyx", "Wyvern"};
  std::string l12[2] = {"All", "Learn"};

  std::cout << "Passing in two double arrays, l11 and l12: " << isGreater(l11, l12, 2, 2) << std::endl;
}