int if_1(int a) {
    if (a > 0) return  a + 1;
    else return a;
}
int if_2(int a) {
    if (a > 0) {
        return a + 1;
    }
    else {
        return a - 2;
    }
}
int if_3(int a) {
    if (a > 0) {
        return a + 1;
    }
    else if (a == 0) {
        return a = 10;
    }
    else {
        return a - 2;
    }
}
int if_4(int a, int b, int c) {
    int positive = 0;
    if (a > 0) ++positive;
    if (b > 0) ++positive;
    if (c > 0) ++positive;
    return positive;
}
void if_5(int a, int b, int c) {
    int positive = 0;
    int negative = 0;
    if (a > 0) ++positive;
    else ++negative;
    if (b > 0) ++positive;
    else ++negative;
    if (c > 0) ++positive;
    else ++negative;
    std::cout << "Negative = " << negative << std::endl << "Positive = " << positive << std::endl;
}
double if_6(double a, double b) {
    if (a > b) return a;
    else return b;
}
double if_7(double a, double b) {
    if (a < b) return 1;
    else return 2;
}
double if_8(double a, double b) {
    if (a > b) {
        std::cout << a << std::endl << b;
    }
    else {
        std::cout << b << std::endl << a;
    }
    std::cout << std::endl;
    return 0;
}
double if_9(double a, double b) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
        std::cout << "a: " << a << std::endl << "b: " << b;
    }
    else {
        std::cout << "a: " << a << std::endl << "b: " << b;
    }
    std::cout << std::endl;
    return 0;
}
int if_10(int a, int b) {
    if (a != b) {
        int res = b + a;
        a = res;
        b = res;
        std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
    }
    return 0;
}
double if_11(int a, int b) {
    if (a == b) {
        return 0;
    }
    else if (a > b) {
        b = a;
    }
    else {
        a = b;
    }

    return 0;
}
double if_12(double a, double b, double c) {
    double min = std::min({ a, b, c });
    std::cout << min << std::endl;
    return 0;
}
double if_13(double a, double b, double c) {
    if ((a > b) ^ (a > c)) {
        std::cout << "a: " << a;
    }
    if ((b > a) ^ (b > c)) {
        std::cout << "b: " << b;
    }
    if ((c > a) ^ (c > b)) {
        std::cout << "c: " << c;
    }
    std::cout << std::endl;
    return 0;
}

void for_1(int k, int n) {
    for (size_t i = 0; i < n; i++)
    {
        std::cout << k << " ";
    }
}

void for_2(int a, int b) {
    for (; a <= b; a++)
    {
        std::cout << a << " ";
    }
}

void for_3(int a, int b) {
    int counter = 0;
    for (b--; b > a; --b)
    {
        std::cout << b << " ";
        counter++;
    }
    std::cout << std::endl;
    std::cout << counter;
}

void for_4(double cost) {
    for (double i = 1; i <= 10; i++)
    {
        std::cout << cost * i << " ";
    }
}

void for_5(double cost) {
    for (double i = 0; i < 1; i += 0.1)
    {
        std::cout << cost * i << " ";
    }
}

void for_6(double cost) {
    for (double i = 1.2; i <= 2; i += 0.2)
    {
        std::cout << cost * i << " ";
    }
}

int for_7(int a, int b) {
    int result = 0;
    for (; a <= b; a++)
    {
        result += a;
    }
    return result;
}

int for_8(int a, int b) {
    int result = 0;
    for (; a <= b; a++)
    {
        result *= a;
    }
    return result;
}

int for_9(int a, int b) {
    int result = 0;
    for (; a <= b; a++)
    {
        result += pow(a, 2);
    }
    return result;
}

double for_10(int n) {
    double result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += (1.0 / i);
    }
    return result;
}

int for_11(int n) {
    int result = 0;
    for (int i = 0; i <= n; ++i)
    {
        result += pow(n + i, 2);
    }
    return result;
}

double for_12(int n) {
    double result = 1;
    for (double i = 1.1; i <= n; i += 0.1)
    {
        result *= i;
    }
    return result;
}

double for_13(int n) {
    double result = 0;
    for (double i = 1.1; i <= n; i += 1)
    {
        result += i / 10 * pow(-1, i);
        std::cout << result << " ";
    }
    return result;
}

double for_14(int n) {
    double result = 1;
    for (double i = 1; i <= n; i += 0.1)
    {
        result *= i;
    }
    return result;
}

double for_15(double a, int n) {
    double result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= a;
    }
    return result;
}

//void for_16(double a, int n) {
//    double result = 1;
//    for (int i = 1; i <= n; ++i)
//    {
//        if (pow(a, i) ) {
//            std::cout << ;
//        }
//    }
//}

double for_17(double a, int n) {
    double result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result += pow(a, i);
    }
    return result;
}

double for_18(double a, int n) {
    double result = 1;
    for (int i = 0; i <= n; ++i)
    {
        result += pow(a, i) * pow(-1, i);
    }
    return result;
}

double fact(int n) {
    double result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

double for_20(int n) {
    double result = 0;
    for (int i = 1; i <= n; ++i)
    {
        result += fact(i);
    }
    return result;
}

double for_21(int n) {
    double result = 0;
    for (int i = 1; i <= n; ++i)
    {
        result += 1 / fact(i);
    }
    return result;
}

void for_40(int a, int b) {
    double result = 0;
    for (int i = a; i <= b; ++i)
    {
        for (size_t j = 1; j <= i; ++j)
        {
            std::cout << i << " ";
        }
    }
}

int while_1(int a, int b) {
    while (a >= b) {
        a -= b;
    }
    return a;
}

int while_2(int a, int b) {
    int counter = 0;
    while (a >= b) {
        a -= b;
        counter++;
    }
    return counter;
}

void while_3(int a, int b) {
    int counter = 0;
    while (a >= b)
    {
        counter++;
        a -= b;
    }
    std::cout << counter << "     " << a;
}

bool while_4(int n) {
    while (n > 3) {
        n /= 3;
        if (n == 3) {
            return true;
        }
    }
    return false;
}

int while_5(int n) {
    int counter = 0;
    int temp = n;
    while (n > 2) {
        n /= 2;
        counter++;
    }
    if (pow(2, counter) == temp) {
        return counter;
    }
}

double double_fact(int n) {
    double result = 1;
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n % 2 == 0) return n * double_fact(n - 2);
    else return n * double_fact(n - 2);
}

int while_7(int n) {
    for (int i = 1; i <= n + 1; i++)
    {
        if (pow(i, 2) > n) {
            return i;
            break;
        }
    }
}

int while_8(int n) {
    for (int i = 1; i <= n + 1; i++)
    {
        if (pow(i, 2) > n) {
            return i - 1;
            break;
        }
    }
}

int while_9(int n) {
    int i = 0;
    while (pow(3, i) < n) {
        i++;
    }
    return i;
}

int while_10(int n) {
    int i = 0;
    while (pow(3, i) < n) {
        i++;
    }
    return i - 1;
}

void while_11(int n) {
    int i = 0;
    int res = 0;
    while (!(res >= n)) {
        i++;
        res += i;
    }
    std::cout << i << " " << res;
}

void while_12(int n) {
    int i = 0;
    int res = 0;
    while (!(res > n)) {
        i++;
        res += i;
    }
    std::cout << i - 1 << " " << res - i;
}

void while_13(int n) {
    double i = 1;
    double res = 0;
    while (res <= n) {
        res += (1 / i);
        i++;
    }
    std::cout << i - 1 << " " << res - (1 / i);
}

void while_15(double p) {
    double i = 0;
    double res = 1000;
    p /= 100;
    while (res < 1100) {
        res += (res * p);
        i++;
    }
    std::cout << i << " " << res;
}

void while_16(double p) {
    double i = 0;
    double res = 10;
    p /= 100;
    while (res < 200) {
        res += (res * p);
        i++;
    }
    std::cout << i << " " << res;
}

void while_17(int n) {
    double i = 0;
    while (n) {
        i = n % 10;
        std::cout << i << " ";
        n /= 10;
    }
}

void while_18(int n) {
    double i = 0;
    int counter = 0;
    while (n) {
        i += n % 10;
        n /= 10;
        counter++;
    }
    std::cout << i << " " << counter;
}

int while_19(int n) {
    int m = 0;
    while (n)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

bool while_20(int n) {
    int m = 0;
    while (n)
    {
        m = n % 10;
        n /= 10;
        if (m == 2) {
            return true;
        }
    }
    return false;
}

bool while_21(int n) {
    int m = 0;
    while (n)
    {
        m = n % 10;
        n /= 10;
        if (m % 2 == 1) {
            return true;
        }
    }
    return false;
}

bool while_22(int n)
{
    int i = 2;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int euclid_algh(int a, int b)
{
    if (b == 0) return a;
    else return euclid_algh(b, a % b);
}

int fibnc_numbers(int n) {
    int f = 0, f1 = 1, f2 = 1;
    while (!(f >= n)) {
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }
    return f;
}

int while_25(int n) {
    int i = 0;
    while (!(fibnc_numbers(i) > n)) {
        i++;
    }
    return fibnc_numbers(i);
}

void while_26(int n) {
    int f = 0, f1 = 1, f2 = 1;
    while (!(f == n)) {
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }
    std::cout << f - f1 << " " << f + f2;
}

int while_27(int n) {
    int counter = 0;
    int f = 0, f1 = 1, f2 = 1;
    while (!(f == n)) {
        f1 = f2;
        f2 = f;
        f = f1 + f2;
        counter++;
    }
    return counter;
}

void while_28(double n) {
    int i = 0;
    double a1 = 2, a = 0;
    while (fabs(a - a1) < n) {
        a += 2 + (1 / a1);
        i++;
    }
    std::cout << i << " " << a1 << " " << a;
}