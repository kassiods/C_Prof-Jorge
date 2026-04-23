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

### 1. Instalar
- VS Code → https://code.visualstudio.com/
- MSYS2 → https://www.msys2.org/

---

### 2. Instalar o GCC

Abra o **MSYS2 UCRT64** e execute:

```bash
pacman -Syu
pacman -S mingw-w64-ucrt-x86_64-gcc
````

---

### 3. Configurar o PATH

Adicione ao **Path**:

```
C:\msys64\ucrt64\bin
```

> Pesquise por **“Variáveis de Ambiente”** → edite o `Path` → adicione o caminho acima
> Reinicie o VS Code após isso

---

### 4. Testar instalação

```bash
gcc --version
```

---

### 5. Compilar e executar

```bash
gcc ex1.c -o ex1
ex1
```

---

## 🐧 Linux

### Instalar GCC

```bash
sudo apt update
sudo apt install build-essential -y
```

---

### Testar

```bash
gcc --version
```

---

### Compilar e executar

```bash
gcc ex1.c -o ex1
./ex1
```

---

## ⚠️ Erros comuns

* **`gcc` não reconhecido** → configure o PATH corretamente
* **`Illegal byte sequence`** → evite OneDrive (use `C:\C` ou `C:\dev`)
* **`printf/scanf` erro** → adicione no código:

  ```c
  #include <stdio.h>
  ```

---

## ✅ Uso rápido

```bash
gcc arquivo.c -o programa
./programa
```

---

<div align="center">

✔️ Ambiente pronto para programar em C

</div>