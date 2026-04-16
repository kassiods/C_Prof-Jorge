# Configuração do Projeto C no VS Code

Guia completo para configurar, compilar e rodar arquivos C com 1 clique no VS Code — tanto no **Windows** quanto no **Linux**.

---

## Índice

- [Configuração do Projeto C no VS Code](#configuração-do-projeto-c-no-vs-code)
  - [Índice](#índice)
  - [O que você vai precisar](#o-que-você-vai-precisar)
  - [Windows](#windows)
    - [1. Instalações necessárias (Windows)](#1-instalações-necessárias-windows)
    - [2. Instalar o compilador GCC](#2-instalar-o-compilador-gcc)
    - [3. Configurar o PATH](#3-configurar-o-path)
    - [4. Teste rápido (Windows)](#4-teste-rápido-windows)
  - [Linux](#linux)
    - [1. Instalações necessárias (Linux)](#1-instalações-necessárias-linux)
    - [2. Instalar o GCC](#2-instalar-o-gcc)
    - [3. Instalar o VS Code](#3-instalar-o-vs-code)
    - [4. Teste rápido (Linux)](#4-teste-rápido-linux)
  - [Configurar o projeto no VS Code](#configurar-o-projeto-no-vs-code)
  - [Rodar com 1 clique](#rodar-com-1-clique)
  - [Erros comuns e soluções](#erros-comuns-e-soluções)
    - [`pacman` não é reconhecido (Windows)](#pacman-não-é-reconhecido-windows)
    - [`gcc: command not found` (Linux)](#gcc-command-not-found-linux)
    - [`stdio.h not found` no VS Code (Windows/Linux)](#stdioh-not-found-no-vs-code-windowslinux)
    - [Erro ao clicar em Run (qualquer sistema)](#erro-ao-clicar-em-run-qualquer-sistema)
    - [Permissão negada ao executar (Linux)](#permissão-negada-ao-executar-linux)
  - [Publicar no GitHub](#publicar-no-github)
  - [Resumo rápido](#resumo-rápido)

---

## O que você vai precisar

| Ferramenta | Windows | Linux |
|---|---|---|
| VS Code | ✅ Instalar manualmente | ✅ Instalar via terminal |
| GCC (compilador C) | ✅ Via MSYS2 | ✅ Via `apt` / `dnf` / `pacman` |
| Git | ✅ Instalar manualmente | ✅ Geralmente já instalado |
| Extensão C/C++ (VS Code) | ✅ | ✅ |

---

## Windows

### 1. Instalações necessárias (Windows)

Baixe e instale nesta ordem:

1. **VS Code**: https://code.visualstudio.com/
2. **Git**: https://git-scm.com/download/win
3. **MSYS2**: https://www.msys2.org/
4. **Extensão C/C++** no VS Code: abra o VS Code, vá em Extensions (`Ctrl+Shift+X`) e instale `ms-vscode.cpptools`

### 2. Instalar o compilador GCC

Após instalar o MSYS2, abra o **PowerShell** e rode:

```powershell
C:\msys64\usr\bin\bash.exe -lc "pacman -S --needed mingw-w64-ucrt-x86_64-gcc"
```

> **Dica:** Se a internet cair durante o download, rode o mesmo comando novamente. O `pacman` retoma de onde parou.

### 3. Configurar o PATH

Adicione `C:\msys64\ucrt64\bin` ao PATH do seu usuário:

1. Pressione `Win` e pesquise por **Variáveis de Ambiente**.
2. Abra **Editar as variáveis de ambiente do sistema**.
3. Clique em **Variáveis de Ambiente...**.
4. Em **Variáveis de usuário**, selecione `Path` e clique em **Editar**.
5. Clique em **Novo** e cole:
   ```
   C:\msys64\ucrt64\bin
   ```
6. Confirme em **OK** até fechar tudo.
7. **Feche e abra o VS Code** para que as mudanças tenham efeito.

### 4. Teste rápido (Windows)

No terminal integrado do VS Code:

```powershell
gcc --version
```

Saída esperada (versão pode variar):

```
gcc (GCC) 14.x.x
```

Compile e rode um arquivo de teste:

```powershell
cd "aula1"
gcc hello.c -o hello.exe
.\hello.exe
```

Saída esperada:

```
Hello, World!
```

---

## Linux

### 1. Instalações necessárias (Linux)

Você vai precisar de:

- **GCC** (compilador C)
- **VS Code**
- **Git**
- **Extensão C/C++** no VS Code

### 2. Instalar o GCC

Escolha o comando de acordo com a sua distribuição:

**Ubuntu / Debian / Linux Mint:**
```bash
sudo apt update
sudo apt install build-essential git -y
```

**Fedora / RHEL / CentOS:**
```bash
sudo dnf install gcc git -y
```

**Arch Linux / Manjaro:**
```bash
sudo pacman -S gcc git base-devel
```

O pacote `build-essential` (ou equivalente) já inclui o `gcc`, `g++` e o `make`.

Verifique a instalação:

```bash
gcc --version
```

### 3. Instalar o VS Code

**Ubuntu / Debian:**
```bash
sudo apt install wget gpg -y
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/keyrings/packages.microsoft.gpg
echo "deb [arch=amd64 signed-by=/etc/apt/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" | sudo tee /etc/apt/sources.list.d/vscode.list
sudo apt update
sudo apt install code -y
```

**Fedora:**
```bash
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'
sudo dnf install code -y
```

**Arch Linux:**
```bash
# Via AUR (usando yay ou paru)
yay -S visual-studio-code-bin
```

Alternativamente, baixe o `.deb` ou `.rpm` direto em: https://code.visualstudio.com/

Após instalar o VS Code, instale a extensão C/C++:

```bash
code --install-extension ms-vscode.cpptools
```

Ou abra o VS Code, vá em Extensions (`Ctrl+Shift+X`) e instale `ms-vscode.cpptools`.

### 4. Teste rápido (Linux)

No terminal:

```bash
cd aula1
gcc hello.c -o hello
./hello
```

Saída esperada:

```
Hello, World!
```

---

## Configurar o projeto no VS Code

1. Abra a **pasta raiz** do projeto no VS Code (`File > Open Folder`).
2. Verifique se existe a pasta `.vscode` com os arquivos `tasks.json` e `launch.json`.
   - Esses arquivos já estão pré-configurados no projeto — você não precisa criar nada.
3. Abra qualquer arquivo C, por exemplo `aula1/hello.c`.

---

## Rodar com 1 clique

1. Vá em **Run and Debug** (atalho `Ctrl+Shift+D`).
2. Escolha a configuração **Run active C file**.
3. Clique no botão verde de play ▶.

O VS Code vai automaticamente:

1. Compilar o arquivo C aberto com `gcc`.
2. Gerar o executável na mesma pasta do arquivo.
3. Executar no terminal integrado.

> **Atenção:** o arquivo C que você quiser rodar precisa estar **aberto e em foco** no editor antes de clicar em Run.

---

## Erros comuns e soluções

### `pacman` não é reconhecido (Windows)

Você rodou o comando no PowerShell comum, sem o caminho completo. Use exatamente:

```powershell
C:\msys64\usr\bin\bash.exe -lc "pacman -S --needed mingw-w64-ucrt-x86_64-gcc"
```

### `gcc: command not found` (Linux)

O GCC não está instalado ou não está no PATH. Instale com o comando do seu sistema (veja a seção [Instalar o GCC](#2-instalar-o-gcc)) e reabra o terminal.

### `stdio.h not found` no VS Code (Windows/Linux)

1. Confirme que a extensão **C/C++** está instalada.
2. Abra o Command Palette (`Ctrl+Shift+P`).
3. Rode `C/C++: Select IntelliSense Configuration...`.
4. Selecione a configuração do projeto (`c_cpp_properties.json`).

### Erro ao clicar em Run (qualquer sistema)

1. Feche e reabra o VS Code.
2. Confirme que o perfil selecionado em **Run and Debug** é `Run active C file`.
3. Verifique se o terminal mostra a compilação com `gcc` sem erros.
4. Certifique-se de que o arquivo C está aberto e em foco no editor.

### Permissão negada ao executar (Linux)

Se aparecer `Permission denied` ao rodar o executável:

```bash
chmod +x ./hello
./hello
```

---

## Publicar no GitHub

1. Crie um repositório **vazio** no GitHub (sem README, sem `.gitignore`).
2. No terminal, dentro da pasta do projeto, execute:

```bash
git init
git add .
git commit -m "Projeto C configurado"
git branch -M main
git remote add origin https://github.com/SEU_USUARIO/SEU_REPOSITORIO.git
git push -u origin main
```

> Substitua `SEU_USUARIO` e `SEU_REPOSITORIO` pelos seus dados reais.

**Dica:** O arquivo `.gitignore` já está configurado para ignorar binários (`.exe` no Windows, arquivos sem extensão gerados no Linux), então apenas o código-fonte será enviado ao GitHub.

---

## Resumo rápido

| Etapa | Windows | Linux |
|---|---|---|
| Compilador | GCC via MSYS2 | GCC via gerenciador de pacotes |
| Verificar instalação | `gcc --version` no PowerShell | `gcc --version` no terminal |
| Compilar manualmente | `gcc arquivo.c -o arquivo.exe` | `gcc arquivo.c -o arquivo` |
| Executar | `.\arquivo.exe` | `./arquivo` |
| Rodar no VS Code | `Ctrl+Shift+D` → Run active C file | `Ctrl+Shift+D` → Run active C file |#   C _ P r o f - J o r g e  
 