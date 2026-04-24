# 🖥️ Configurando C no VS Code

> Guia rápido para configurar o ambiente de desenvolvimento C com VS Code no **Windows** e **Linux**.

---

## 📋 Índice

- [🪟 Windows (MSYS2)](#-windows-msys2)
- [🐧 Linux (Ubuntu/Debian)](#-linux-ubuntudebian)
- [💻 Configurando o VS Code](#-configurando-o-vs-code)
- [🚀 Dicas extras](#-dicas-extras)

---

## 🪟 Windows (MSYS2)

### 📥 1. Instalar ferramentas

| Ferramenta | Link |
|------------|------|
| VS Code | https://code.visualstudio.com/ |
| MSYS2 | https://www.msys2.org/ |

---

### ⚙️ 2. Instalar o GCC

Abra o terminal **MSYS2 UCRT64** e execute:

```bash
pacman -Syu
```

> ⚠️ Feche o terminal após a atualização e abra novamente.

Em seguida, instale o GCC:

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
```

---

### 🔧 3. Configurar o PATH

Adicione o seguinte caminho ao **PATH do sistema** no Windows:

```
C:\msys64\ucrt64\bin
```

> 💡 **Como fazer:** Painel de Controle → Sistema → Configurações avançadas do sistema → Variáveis de Ambiente → Editar `Path`

---

### 🧪 4. Testar instalação

No **CMD** ou **PowerShell**:

```bash
gcc --version
```

Se a versão aparecer, está tudo certo! ✅

---

## 🐧 Linux (Ubuntu/Debian)

### 📦 1. Instalar o GCC

```bash
sudo apt update
sudo apt install build-essential
```

---

### 🧪 2. Testar instalação

```bash
gcc --version
```

---

## 💻 Configurando o VS Code

### 🔌 Extensões recomendadas

| Extensão | Descrição |
|----------|-----------|
| **C/C++** (Microsoft) | Suporte à linguagem, IntelliSense e debug |
| **Code Runner** *(opcional)* | Execução rápida de código com atalho |

---

### ▶️ Compilar e executar

**1.** Crie um arquivo `main.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

**2.** Compile:

```bash
gcc main.c -o main
```

**3.** Execute:

```bash
# Linux / MSYS2
./main

# Windows (CMD/PowerShell)
main.exe
```

---

## 🚀 Dicas extras

- 💾 Sempre salve seus arquivos com a extensão `.c`
- 🔤 Use nomes simples, **sem espaços** (ex: `meu_programa.c`)
- 📁 Organize cada projeto em sua própria pasta
- 🐛 Use a flag `-Wall` para ativar avisos do compilador:
  ```bash
  gcc -Wall main.c -o main
  ```

---

<div align="center">

💡 **Feito para iniciantes em C que querem começar rápido!**

</div>
