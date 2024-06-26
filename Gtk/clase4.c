#include <gtk/gtk.h>

void exit_callback(GtkWidget *window, gpointer data) {
    printf("Terminando prograna\n");
    gtk_main_quit();
}

gboolean delete_event(GtkWidget *window, GdkEvent *event) {
    printf("Delete event\n");
    return FALSE;
}

gboolean window_event(GtkWidget *window, GdkEventWindowState *event) {
    if ( event->new_window_state & GDK_WINDOW_STATE_MAXIMIZED ) {
        printf("La ventana se maximizo\n");
    } else {
        printf("Window event\n");
    }
    return FALSE;
}

int main(int argc, char **argv) {
    
    GtkWidget *window;
    
    gtk_init(&argc, &argv);
    
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title( GTK_WINDOW(window), "Clase 4 GTK Eventos" );
    gtk_window_set_title( GTK_WINDOW(window), "Clase 4 GTK Eventos" );

    g_signal_connect( G_OBJECT(window), "destroy", G_CALLBACK(exit_callback), NULL);
    g_signal_connect( G_OBJECT(window), "delete_event", G_CALLBACK(delete_event), NULL);
    g_signal_connect( G_OBJECT(window), "window_state_event", G_CALLBACK(window_event), NULL);

    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    
    gtk_widget_show(window);
    //maximizar
    //gtk_window_maximize(GTK_WINDOW(window));
    //minimizar
    //gtk_window_iconify(GTK_WINDOW(window));
    gtk_main ();

    return 0;
}