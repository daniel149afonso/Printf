# ft_printf

`ft_printf` is a 42 school project aiming to recreate the well-known C standard library function `printf`.  
It supports formatted output, handling various specifiers like `%d`, `%s`, `%x`, and more.

## 🎯 Objectives

- Reimplement the behavior of the C `printf` function
- Handle multiple format specifiers and flags
- Work with variadic functions in C (`<stdarg.h>`)
- Build a deeper understanding of formatted output and string manipulation

## ✅ Features

- Supports the following format specifiers:
  - `%c` : character
  - `%s` : string
  - `%p` : pointer address
  - `%d` / `%i` : signed integers
  - `%u` : unsigned decimal
  - `%x` / `%X` : hexadecimal (lowercase/uppercase)
  - `%%` : percent symbol
- Bonus (optional):
  - Handle flags: `-`, `0`, width, precision, etc.

## 📁 Project Structure

- `ft_printf.c` — main logic
- `ft_printf_utils.c` — helper functions
- `libft/` — custom libft (if used)
- `ft_printf.h` — header file
- `Makefile`

## Usage 🛠️

Compile the library :

```bash
make
```

Use libft.a in your project :

```bash
gcc main.c libft.a
```

Clean obejct files :

```bash
make clean
```

Clean object files and the executable :

```bash
make fclean
```

Recompile everything from scratch :

```bash
make re
```

---

## 🇫🇷 README – `ft_printf`


# ft_printf

`ft_printf` est un projet de l'école 42 qui consiste à recréer la célèbre fonction `printf` de la bibliothèque standard C.  
Il permet l'affichage formaté, en gérant différents types comme `%d`, `%s`, `%x`, etc.

## 🎯 Objectifs

- Reproduire le comportement de la fonction `printf`
- Gérer plusieurs types de formats et drapeaux (`flags`)
- Travailler avec les fonctions variadiques en C (`<stdarg.h>`)
- Approfondir la manipulation de chaînes et de la mémoire

## ✅ Fonctionnalités

- Prise en charge des formats suivants :
  - `%c` : caractère
  - `%s` : chaîne de caractères
  - `%p` : adresse mémoire
  - `%d` / `%i` : entier signé
  - `%u` : entier non signé
  - `%x` / `%X` : hexadécimal (minuscule/majuscule)
  - `%%` : symbole pourcentage
- Bonus (optionnel) :
  - Gestion des flags `-`, `0`, largeur, précision, etc.

## 📁 Structure du projet

- `ft_printf.c` — logique principale
- `ft_printf_utils.c` — fonctions utilitaires
- `libft/` — ta libft personnalisée (si utilisée)
- `ft_printf.h` — fichier d'en-tête
- `Makefile`

## Utilisation 🛠️

Compiler la bibliothèque :

```bash
make
```

Utiliser libft.a dans un projet :

```bash
gcc main.c libft.a
```

Nettoyer les fichiers objets :

```bash
make clean
```

Nettoyer les fichiers objets et l'exécutable :

```bash
make fclean
```

Recompiler depuis zéro :

```bash
make re
