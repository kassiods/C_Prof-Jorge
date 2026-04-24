````md
<div align="center">

# ⚙️ Guia Rápido — GCC + C no VS Code

Compile e execute programas em C em poucos minutos 🚀

![Windows](https://img.shields.io/badge/Windows-0078D4?style=for-the-badge&logo=windows&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)

</div>

---

## 🪟 Windows (MSYS2)

### 📥 1. Instalar ferramentas

- VS Code → https://code.visualstudio.com/
- MSYS2 → https://www.msys2.org/

---

### ⚙️ 2. Instalar o GCC

Abra o terminal **MSYS2 UCRT64** e execute:

```bash
pacman -Syu
````

Feche o terminal e abra novamente, depois rode:

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
```

---

### 🔧 3. Configurar o PATH

Adicione ao PATH do Windows:

```
C:\msys64\ucrt64\bin
```

---

### 🧪 4. Testar instalação

No terminal (CMD ou PowerShell):

```bash
gcc --version
```

Se aparecer a versão, está tudo certo ✅

---

## 🐧 Linux (Ubuntu/Debian)

### 📦 Instalar GCC

```bash
sudo apt update
sudo apt install build-essential
```

---

### 🧪 Testar

```bash
gcc --version
```

---

## 💻 VS Code

### 🔌 Extensões recomendadas

* C/C++ (Microsoft)
* Code Runner (opcional)

---

### ▶️ Compilar e executar

Crie um arquivo `main.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Compile:

```bash
gcc main.c -o main
```

Execute:

```bash
./main
```

No Windows:

```bash
main.exe
```

---

## 🚀 Dicas extras

* Sempre salve seus arquivos com `.c`
* Use nomes simples (sem espaço)
* Organize seus projetos em pastas

---

<div align="center">

💡 Feito para iniciantes em C que querem começar rápido!

</div>
```
