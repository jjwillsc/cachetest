#define N 1024
int main(int argc, char **argv) {
      int i, j;
      char memory[N];
      for (i = 0; i < 10; ++i) {
        for (j = 0; j < (N-1); ++j) {
          memory[j] = memory[j+1]+1; }}
      return 0;}