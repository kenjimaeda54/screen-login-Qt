# Login Simples
Aplicação simples, conceito de login 

## Motivação
Aplicar recursos de logica logado,deslogado e resource de imagens.



## Feature
- Utilizei um componente conhecido como statusbar
- Statusbar vai aparecer a imagme no canto inferior direito no sistema operacional Linux
- Apliquei uso do resources para salvar imagens no projeto



``` c++

void Screen_Login::on_btn_login_clicked()
{
    if(ui->field_password->text() == "1234" && ui->field_email->text() == "kenji@gmail"  ){
         ui->statusbar->showMessage("Login with sucess");
    }else {

        ui->statusbar->showMessage("Password and Email incorrects");
        ui->field_email->clear();
        ui->field_password->clear();

    }

}

```

##


## ScreenShoot

![loginWrong.jpeg](https://github.com/kenjimaeda54/screen-login-Qt/blob/develop/loginWrong.jpeg)
![loginSucess.jpeg](https://github.com/kenjimaeda54/screen-login-Qt/blob/develop/loginSucess.jpeg)


