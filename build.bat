@echo off
setlocal enabledelayedexpansion

:: Variáveis
set SRC_DIR=src
set INCLUDE_DIR=include
set BUILD_DIR=build
set OUTPUT=%BUILD_DIR%\conversor.exe

:: Verifica se a pasta de saída existe, caso contrário, cria
if not exist %BUILD_DIR% (
    mkdir %BUILD_DIR%
)

:: Monta a lista de arquivos .c na pasta src
set FILES=
for %%f in (%SRC_DIR%\*.c) do (
    set FILES=!FILES! %%f
)

:: Compila o projeto com todos os arquivos .c encontrados
gcc -I%INCLUDE_DIR% -Wall -Wextra -g3 !FILES! -o %OUTPUT%
if %errorlevel% neq 0 (
    echo Erro ao compilar o projeto.
    exit /b %errorlevel%
)

echo Projeto compilado com sucesso.
%OUTPUT%
