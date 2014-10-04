#include <iostream>
#include <vector>

using std::vector;

class MountainRanges {
  public:
    int countPeaks(const vector<int>&);
};

int MountainRanges::countPeaks(const vector<int>& _h) {
  int nm = 0;
  int sz = _h.size();
  if (sz < 2) {
    return 0;
  }
  for (int i = 2; i < sz; i++) {
    if (_h[i-2] < _h[i-1] && _h[i-1] > _h[i]) {
      nm++;
    }
  }
  return nm;
}


int main(void) {
  vector<int> h;
  h.push_back(1);
  h.push_back(3);
  h.push_back(2);
  h.push_back(1);
  h.push_back(3);
  h.push_back(2);
  MountainRanges mr;
  int cnt = mr.countPeaks(h);
  std::cout << cnt << std::endl;
  return 0;
}
