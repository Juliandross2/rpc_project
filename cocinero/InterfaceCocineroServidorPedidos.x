program autorizar_cocineros{
    version autorizar_cocineros_version{
        int seleccionarIdCocinero(int idCocinero)=1;
        int terminarPedido(int idCocinero)=2;
        int desconectarCocinero(int idCocinero)=3;
    }=1;
}=0x20000003;