void func(int& a, short b, float c) {
    a = b + static_cast<int>(c);
}

int main() {
    int sum = 12;
    func(sum, 3, 4.05);
    return sum;
}
