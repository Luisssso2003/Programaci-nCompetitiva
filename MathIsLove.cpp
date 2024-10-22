#include <cstdio>
#include <cmath>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long Y;
        scanf("%lld", &Y);

        long long discriminant = 1 + 8 * Y;
        long long sqrt_disc = sqrt(discriminant);

        if (sqrt_disc * sqrt_disc == discriminant && (-1 + sqrt_disc) % 2 == 0) {
            long long n = (-1 + sqrt_disc) / 2;
            printf("%lld\n", (n * (n + 1)) / 2 == Y ? n : -1);
        } else {
            printf("NAI\n");
        }
    }

    return 0;
}
