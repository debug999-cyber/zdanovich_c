# Контрольная работа №1 — C

![C](https://img.shields.io/badge/язык-C-A8B9CC?style=flat-square&logo=c&logoColor=1B1B14)
![Тип](https://img.shields.io/badge/тип-учебная%20работа-6C6C77?style=flat-square)

> Индивидуальная контрольная работа №1 по программированию на языке **C**.

## Код

```c
#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    char str[n];
    
    printf("Enter string: ");
    scanf("%s", str);
    
    int i = 0;
    while (str[i] != '\0')
    {
        char current_char = str[i];
        int count = 1;
        
        while (str[i + 1] == current_char)
        {
```

## Сборка и запуск

```bash
gcc "IKR№1.c" -o ikr
./ikr
```

---
<sub>Учебная работа.</sub>
