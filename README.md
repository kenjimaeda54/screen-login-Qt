# Login Simples
Aplicacao simples conceito de login 

## Motivacao
Aplicar recursos de logica logado e deslogado e resource de imagens locais


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


## Screnn Shoots




