#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>
#include <list>
#include <vector>
#include <random>
#include <queue>

int get_rand(int num_1= 1, num_2= 6)
{
 std::random_device rand_dev;
 std::mt19937::result_type seed= rand_dev() ^ ((std::mt19937::result_type) std::chrono::duration_cast<std::chrono::seconds >
                                              std::chrono::system_clock::now().time_since_epoch().count() +
                                              (std::mt19937::result_type) std::chrono::duration_cast<std::chrono::microseconds> (
                                              std::chrono::high_resolution_clock::now().time_since_epoch()).count());
 std::mt19937 gen(seed);
 std::uniform_int_distribution<unsigned> distribution(num_1, num_2);
 
 return distribution(gen);
}

int main()
{
 float avg_length = 0.0;
 float avg_wait_time = 0.0;
 float avg_service_time = 0.0;
 
 int max= 0;
 int timer= 0;
 
 queue<int> first;
 queue<int> business;
 queue<int> economy;
 
 return 0; 
}
