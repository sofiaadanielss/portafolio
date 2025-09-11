# Reporte de practica Markdown Git Github y Hugo

## Markdown

Markdown es un lenguaje de marcado ligero creado por John Gruber que permite formatear texto de manera sencilla usando sintaxis simple. Se convierte a HTML válido y es ampliamente usado en documentación, foros y plataformas como GitHub.

Sintaxis básica para dar formato

Encabezados:
Usa # para crear títulos. El número de # indica el nivel del título. 
# Título de nivel 1
## Título de nivel 2

Texto básico:
Para negrita, envuelve el texto con dos asteriscos o guiones bajos (**texto negrita** o __texto negrita__). 
Para cursiva, envuelve el texto con un asterisco o guión bajo (*texto cursiva* o _texto cursiva_). 

Listas:
Para listas numeradas, comienza cada línea con un número y un punto (1., 2., etc.). 
Para listas con viñetas, usa un asterisco, guión o signo de más (*, -, o +) al inicio de cada línea. 

Vínculos:
La sintaxis es el Texto del enlace. 

Bloques de código:
Puedes incluir código en línea con comillas invertidas (` ) alrededor del texto [5, 7]. Para bloques de código más grandes, usa tres comillas invertidas (``) al principio y al final. 

Tablas:

| Columna 1 | Columna 2 |
|-----------|-----------|
| Dato 1    | Dato 2    |

Citas:

> Esta es una cita

### Casos de uso

Documentación y notas:
Es ideal para escribir documentación técnica, notas y apuntes de manera rápida y organizada.
 
Blogs y sitios web:
Muchos servicios como los sistemas de gestión de contenido (CMS) y los foros soportan Markdown para facilitar la creación de publicaciones. 

Escritura general:
Puedes usarlo para crear listas de elementos, escribir correos electrónicos, o incluso para redactar libros o capítulos de libros. 

Plataformas de desarrollo:
En el mundo de la programación se usa ampliamente en repositorios como GitHub y para la escritura de documentación. 

Editores y herramientas:
Es compatible con una gran variedad de aplicaciones y servicios, como los Google Docs (con la opción de activarlo), Trello, y editores de texto. 


# Uso de Git y GitHub

## Git
Git es un sistema de control de versiones que realiza un seguimiento de los cambios en los archivos. Git es especialmente útil cuando un grupo de personas y tú estáis haciendo cambios en los mismos archivos al mismo tiempo.

Normalmente, para hacerlo en un flujo de trabajo basado en Git, harías lo siguiente:

Crear una rama a partir de la copia principal de archivos en los que tú (y tus colaboradores) estáis trabajando.
Realizar modificaciones en los archivos de forma independiente y segura en tu propia rama personal.
Dejar que Git fusione mediante combinación y de forma inteligente los cambios específicos en la copia principal de archivos, de modo que los cambios no afecten a las actualizaciones de otras personas.
Dejar que Git realice un seguimiento de tus cambios y los de otras personas, por lo que todos siguen trabajando en la versión más actualizada del proyecto.

## GitHub
GitHub es una plataforma basada en la nube donde puedes almacenar, compartir y trabajar junto con otros usuarios para escribir código.

Almacenar tu código en un "repositorio" en GitHub te permite lo siguiente:

Presentar o compartir el trabajo.
Seguir y administrar los cambios en el código a lo largo del tiempo.
Dejar que otros usuarios revisen el código y realicen sugerencias para mejorarlo.
Colaborar en un proyecto compartido, sin preocuparse de que los cambios afectarán al trabajo de los colaboradores antes de que esté listo para integrarlos.

El trabajo colaborativo, una de las características fundamentales de GitHub, es posible gracias al software de código abierto Git, en el que se basa GitHub.

##¿Cómo funcionan Git y GitHub de manera conjunta?

Al cargar archivos en GitHub, los almacenarán en un "repositorio de Git". Esto significa que al realizar cambios (o "confirmaciones") en los archivos de GitHub, Git se iniciará automáticamente para realizar el seguimiento de los cambios y administrarlos.

Hay muchas acciones relacionadas con Git que puedes completar en GitHub directamente en el navegador, como crear un repositorio de Git, crear ramas y cargar y editar archivos.

Pero la mayoría de los usuarios trabajan en sus archivos localmente (en su propio ordenador), luego sincroniza continuamente estos cambios locales y todos los datos de Git relacionados, con el repositorio central "remoto" en GitHub. Hay muchas herramientas que puedes usar para hacerlo, como GitHub Desktop.

Cuando empieces a colaborar con otros y todos necesitan trabajar en el mismo repositorio al mismo tiempo, haréis lo siguiente continuamente:

Extraer todos los cambios más recientes realizados por los colaboradores del repositorio remoto en GitHub.
Insertar tus propios cambios en el mismo repositorio remoto en GitHub.
Git determina cómo combinar inteligentemente este flujo de cambios y GitHub te ayuda a administrarlo mediante características como las "solicitudes de cambios".

## Crear un repositorio en GitHub (remoto)

Este es el método más común para empezar un proyecto en la nube.
1. Abre GitHub y crea uno nuevo:
En la esquina superior derecha de cualquier página de GitHub, haz clic en el signo de la cruz (+) y selecciona "Nuevo repositorio". 

2. Rellena los detalles:
Nombre del repositorio: Escribe un nombre corto y descriptivo.
Descripción (opcional): Añade una breve descripción de tu proyecto.
Visibilidad: Elige si el repositorio será público (todos pueden verlo) o privado. 


3. Inicializa con un archivo README (opcional):
Puedes elegir inicializar el repositorio con un archivo "README.md" que sirve como descripción inicial de tu proyecto, lo cual es una buena práctica. 

4. Crea el repositorio:
Haz clic en el botón "Crear repositorio". 

# Crear un repositorio local con Git (local)

Este proceso crea un repositorio directamente en tu ordenador. 
Abre la terminal o línea de comandos: Navega a la carpeta de tu proyecto usando cd /ruta/a/tu/proyecto.
Inicializa el repositorio: Ejecuta el comando git init. Esto crea una subcarpeta oculta .git en tu directorio, que contiene todos los archivos necesarios para Git.
Conectar un repositorio local con un repositorio remoto en GitHub
Una vez que tienes un repositorio local y uno remoto en GitHub, puedes conectarlos:
Obtén la URL del repositorio remoto: Copia la URL del repositorio que creaste en GitHub. 
Agrega el repositorio remoto: En tu terminal, dentro de la carpeta de tu proyecto, ejecuta: git remote add origin <URL_DEL_REPOSITORIO_REMOTO>. 
Sube tus cambios: Realiza cambios en tus archivos, añade con git add . y haz un commit con git commit -m "Mensaje del commit". Luego, sube tu código a GitHub con git push -u origin main (o el nombre de tu rama principal). 

## ¿Qué es Hugo?
Hugo es un generador de sitios estáticos rápido y moderno escrito en Go. Permite crear sitios web usando plantillas y contenido en markdown.

## ¿Qué son GitHub Actions?
GitHub Actions es una plataforma de integración y despliegue continuo (CI/CD) que automatiza workflows directamente desde GitHub.

## Crear Sitio con Hugo
Instalación (Git Bash)

# Descargar Hugo
curl -LO https://github.com/gohugoio/hugo/releases/download/v0.111.3/hugo_0.111.3_Linux-64bit.tar.gz
tar -xzf hugo_0.111.3_Linux-64bit.tar.gz
sudo mv hugo /usr/local/bin/

hugo new site mi-sitio
cd mi-sitio

# Añadir tema (ejemplo)
git init
git submodule add https://github.com/theNewDynamic/gohugo-theme-ananke.git themes/ananke
echo 'theme = "ananke"' >> config.toml

# Crear contenido
hugo new posts/mi-primer-post.md

name: Deploy to GitHub Pages

on:
  push:
    branches: [ main ]

jobs:
  deploy:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v3
        with:
          submodules: true
          
      - name: Setup Hugo
        uses: peaceiris/actions-hugo@v2
        with:
          hugo-version: 'latest'
          
      - name: Build
        run: hugo --minify
        
      - name: Deploy
        uses: peaceiris/actions-gh-pages@v3
        with:
          github_token: ${{ secrets.GITHUB_TOKEN }}
          publish_dir: ./public

Enlaces de Mi Portafolio
Repositorio en GitHub: https://github.com/sofiaadanielss/portafolio 

Sitio en GitHub Pages: https://sofiaadanielss.github.io/portafolio

