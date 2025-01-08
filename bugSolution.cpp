std::vector<int> vec = {1, 2, 3, 4, 5};

for (size_t i = 0; i < vec.size(); ++i) { // Corrected loop condition
  std::cout << vec[i] << " ";
}

std::cout << "\n";

// Alternative using iterators
for (int& num : vec) {
  std::cout << num << " ";
}
std::cout << "\n";