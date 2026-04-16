<div align="center">

# 🛠️ Configuração do Projeto C no VS Code

Guia completo para configurar, compilar e rodar arquivos C com **1 clique** no VS Code.

![Windows](https://img.shields.io/badge/Windows-0078D4?style=for-the-badge&logo=windows&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)

</div>

---

## 📋 Índice

- [O que você vai precisar](#-o-que-você-vai-precisar)
- [Windows](#-windows)
- [Linux](#-linux)
- [Configurar o projeto no VS Code](#️-configurar-o-projeto-no-vs-code)
- [Rodar com 1 clique](#️-rodar-com-1-clique)
- [Erros comuns e soluções](#-erros-comuns-e-soluções)
- [Publicar no GitHub](#-publicar-no-github)
- [Resumo rápido](#-resumo-rápido)

---

## 📦 O que você vai precisar

| Ferramenta | Windows | Linux |
| :--- | :---: | :---: |
| VS Code | ✅ Instalar manualmente | ✅ Instalar via terminal |
| GCC (compilador C) | ✅ Via MSYS2 | ✅ Via `apt` / `dnf` / `pacman` |
| Git | ✅ Instalar manualmente | ✅ Geralmente já instalado |
| Extensão C/C++ (VS Code) | ✅ | ✅ |

---

## 🪟 Windows

### 1. Instalações necessárias

Baixe e instale **nesta ordem**:

1. **VS Code** → https://code.visualstudio.com/
2. **Git** → https://git-scm.com/download/win
3. **MSYS2** → https://www.msys2.org/
4. **Extensão C/C++** → Abra o VS Code, vá em Extensions (`Ctrl+Shift+X`) e instale `ms-vscode.cpptools`

### 2. Instalar o compilador GCC

Após instalar o MSYS2, abra o **PowerShell** e rode:

```powershell
C:\msys64\usr\bin\bash.exe -lc "pacman -S --needed mingw-w64-ucrt-x86_64-gcc"
```

> 💡 **Dica:** Se a internet cair durante o download, rode o mesmo comando novamente. O `pacman` retoma de onde parou.

### 3. Configurar o PATH

Adicione `C:\msys64\ucrt64\bin` ao PATH do seu usuário:

1. Pressione `Win` e pesquise por **Variáveis de Ambiente**
2. Abra **Editar as variáveis de ambiente do sistema**
3. Clique em **Variáveis de Ambiente...**
4. Em **Variáveis de usuário**, selecione `Path` e clique em **Editar**
5. Clique em **Novo** e cole:
   ```
   C:\msys64\ucrt64\bin
   ```
6. Confirme em **OK** até fechar tudo
7. **Feche e reabra o VS Code** para que as mudanças tenham efeito

### 4. Teste rápido

No terminal integrado do VS Code, verifique o compilador:

```powershell
gcc --version
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

## 🐧 Linux

### 1. Instalar o GCC e o Git

Escolha o comando de acordo com a sua distribuição:

<details>
<summary><b>Ubuntu / Debian / Linux Mint</b></summary>

```bash
sudo apt update
sudo apt install build-essential git -y
```

</details>

<details>
<summary><b>Fedora / RHEL / CentOS</b></summary>

```bash
sudo dnf install gcc git -y
```

</details>

<details>
<summary><b>Arch Linux / Manjaro</b></summary>

```bash
sudo pacman -S gcc git base-devel
```

</details>

> ℹ️ O pacote `build-essential` (ou equivalente) já inclui `gcc`, `g++` e `make`.

Verifique a instalação:

```bash
gcc --version
```

### 2. Instalar o VS Code

<details>
<summary><b>Ubuntu / Debian</b></summary>

```bash
sudo apt install wget gpg -y
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/keyrings/packages.microsoft.gpg
echo "deb [arch=amd64 signed-by=/etc/apt/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" \
  | sudo tee /etc/apt/sources.list.d/vscode.list
sudo apt update
sudo apt install code -y
```

</details>

<details>
<summary><b>Fedora</b></summary>

```bash
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" \
  > /etc/yum.repos.d/vscode.repo'
sudo dnf install code -y
```

</details>

<details>
<summary><b>Arch Linux (via AUR)</b></summary>

```bash
yay -S visual-studio-code-bin
```

</details>

Ou baixe o `.deb` / `.rpm` diretamente em: https://code.visualstudio.com/

Instale a extensão C/C++ via terminal:

```bash
code --install-extension ms-vscode.cpptools
```

### 3. Teste rápido

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

## ⚙️ Configurar o projeto no VS Code

1. Abra a **pasta raiz** do projeto no VS Code (`File > Open Folder`)
2. Verifique se existe a pasta `.vscode` com os arquivos `tasks.json` e `launch.json`
   > Esses arquivos já estão pré-configurados — você não precisa criar nada.
3. Abra qualquer arquivo C, por exemplo `aula1/hello.c`

---

## ▶️ Rodar com 1 clique

1. Acesse **Run and Debug** com `Ctrl+Shift+D`
2. Selecione a configuração **Run active C file**
3. Clique no botão verde **▶ Play**

O VS Code vai automaticamente:

- Compilar o arquivo C aberto com `gcc`
- Gerar o executável na mesma pasta do arquivo
- Executar no terminal integrado

> ⚠️ **Atenção:** o arquivo C que deseja rodar precisa estar **aberto e em foco** no editor antes de clicar em Run.

---

## 🐛 Erros comuns e soluções

<details>
<summary><b><code>pacman</code> não é reconhecido — Windows</b></summary>

Você rodou no PowerShell comum sem o caminho completo. Use exatamente:

```powershell
C:\msys64\usr\bin\bash.exe -lc "pacman -S --needed mingw-w64-ucrt-x86_64-gcc"
```

</details>

<details>
<summary><b><code>gcc: command not found</code> — Linux</b></summary>

O GCC não está instalado ou não está no PATH. Instale com o comando da sua distribuição (veja a seção [Instalar o GCC](#1-instalar-o-gcc-e-o-git)) e reabra o terminal.

</details>

<details>
<summary><b><code>stdio.h not found</code> no VS Code — Windows/Linux</b></summary>

1. Confirme que a extensão **C/C++** está instalada
2. Abra o Command Palette com `Ctrl+Shift+P`
3. Execute `C/C++: Select IntelliSense Configuration...`
4. Selecione a configuração do projeto (`c_cpp_properties.json`)

</details>

<details>
<summary><b>Erro ao clicar em Run — qualquer sistema</b></summary>

1. Feche e reabra o VS Code
2. Confirme que o perfil selecionado em Run and Debug é `Run active C file`
3. Verifique se o terminal mostra a compilação com `gcc` sem erros
4. Certifique-se de que o arquivo C está aberto e em foco no editor

</details>

<details>
<summary><b>Permission denied ao executar — Linux</b></summary>

```bash
chmod +x ./hello
./hello
```

</details>

---

## 🚀 Publicar no GitHub

1. Crie um repositório **vazio** no GitHub — sem README, sem `.gitignore`
2. No terminal, dentro da pasta do projeto, execute:

```bash
git init
git add .
git commit -m "Projeto C configurado"
git branch -M main
git remote add origin https://github.com/SEU_USUARIO/SEU_REPOSITORIO.git
git push -u origin main
```

> 🔁 Substitua `SEU_USUARIO` e `SEU_REPOSITORIO` pelos seus dados reais.

> 💡 O `.gitignore` já está configurado para ignorar binários (`.exe` no Windows e executáveis sem extensão no Linux), então apenas o código-fonte será enviado.

---

## 📊 Resumo rápido

| Etapa | Windows | Linux |
| :--- | :--- | :--- |
| Compilador | GCC via MSYS2 | GCC via gerenciador de pacotes |
| Verificar instalação | `gcc --version` no PowerShell | `gcc --version` no terminal |
| Compilar manualmente | `gcc arquivo.c -o arquivo.exe` | `gcc arquivo.c -o arquivo` |
| Executar | `.\arquivo.exe` | `./arquivo` |
| Rodar no VS Code | `Ctrl+Shift+D` → Run active C file | `Ctrl+Shift+D` → Run active C file |
