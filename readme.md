#### Trabajo prático N°1

**Investigar el archivo .gitignore**

- ¿Por qué es conveniente incluirlo?

 .gitignore es conveniente incluirlo para ignorar archivos o carpetas enteras de nuestro sistema.

- ¿Cuándo se debe hacer?

 Se lo debe poner cuando tenemos un archivo o carpeta que no necesitamos controlar con Git.

- ¿Cómo usaría la página https://www.gitignore.io/?

 permite definir todos aquellos elementos de nuestro espacio de trabajo, junto con librerías, frameworks y lenguajes. Una vez completa la lista de tecnologías deseada, nos entrega directamente el código de nuestro archivo .gitignore sin tener que preocuparnos de más, será solamente copiar y pegar.

 por ejemplo en nuestro caso buscariamos que la pagina nos de un .gitignore basada en windows(el sitema que tengo), y el lenguaje que usamos C (el que actualmente usamos)

- ¿Cómo configuraría el archivo _.gitignore_?

 en este caso solamente tendriamos que hacer que ignore la carpeta .vscode ya que la necesitamos para usar el visual studio pero no queremos que la controle.
 dentro del archivo .gitignore tenemos que poner .vscode/