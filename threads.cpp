#include <iostream>
#include <thread>
#include <vector>

int main() {
  const int NUM_THREADS = 15000;
  std::vector<std::thread> threads;
  threads.reserve(NUM_THREADS);

  for (int id = 0; id < NUM_THREADS; ++id) {

    std::thread t{[id]() {
      std::cout << "Thread " << id << " is running\n";
    }};
    (id < NUM_THREADS) ? t.detach() : t.join();
  }

  std::cout << "All " << NUM_THREADS << " threads have finished.\n";
  return 0;
}
