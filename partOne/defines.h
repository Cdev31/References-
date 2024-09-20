#ifndef DEFINES_H
#define DEFINES_H

#define POTENCIACION(number, potencia) ({ \
    int result = 1; \
    for (int i = 0; i < (potencia); i++) { \
        result *= (number); \
    } \
    result; \
})

#endif 