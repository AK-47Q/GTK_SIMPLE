#ifndef GTKSIMPLE_H
#define GTKSIMPLE_H

#include <gtk/gtk.h>

/* Types */
typedef GtkWidget gtkw_t;
typedef GtkWidget *gtkwp_t;
typedef GtkWindow gtkwin_t;
typedef GtkBox gtkbox_t;
typedef GtkLabel gtklbl_t;
typedef GtkButton gtkbtn_t;
typedef GtkApplication gtkapp_t;

/* Window */
#define win_new     gtk_application_window_new
#define win_title   gtk_window_set_title
#define win_size    gtk_window_set_default_size
#define win_child   gtk_window_set_child
#define win_present gtk_window_present
#define win_close   gtk_window_close
#define win_name    gtk_window_get_title

#define as_win      GTK_WINDOW
#define as_app      GTK_APPLICATION

/* Box */
#define box_new     gtk_box_new
#define box_add     gtk_box_append
#define box_prepend gtk_box_prepend
#define box_remove gtk_box_remove
#define box_spacing gtk_box_set_spacing

#define as_box      GTK_BOX

#define box_vnew(spacing) \
    gtk_box_new(GTK_ORIENTATION_VERTICAL, spacing)

#define box_hnew(spacing) \
    gtk_box_new(GTK_ORIENTATION_HORIZONTAL, spacing)

/* Label */
#define lbl_new     gtk_label_new
#define lbl_text    gtk_label_set_text
#define lbl_get     gtk_label_get_text
#define lbl_align   gtk_label_set_xalign
#define lbl_wrap    gtk_label_set_wrap
#define as_lbl      GTK_LABEL

/* Button */
#define btn_new     gtk_button_new_with_label
#define btn_label   gtk_button_set_label
#define btn_get     gtk_button_get_label
#define btn_click   gtk_button_clicked
#define as_btn      GTK_BUTTON

/* Widget */
#define w_show      gtk_widget_set_visible
#define w_hide(w)   gtk_widget_set_visible(w, FALSE)
#define w_show_(w)  gtk_widget_set_visible(w, TRUE)
#define w_sensitive gtk_widget_set_sensitive
#define w_expand    gtk_widget_set_hexpand
#define w_vexpand   gtk_widget_set_vexpand
#define w_margin    gtk_widget_set_margin_top

/* Orientation */
#define OR_V GTK_ORIENTATION_VERTICAL
#define OR_H GTK_ORIENTATION_HORIZONTAL

/* Alignment */
#define AL_FILL   GTK_ALIGN_FILL
#define AL_START  GTK_ALIGN_START
#define AL_END    GTK_ALIGN_END
#define AL_CENTER GTK_ALIGN_CENTER
#define AL_BASE   GTK_ALIGN_BASELINE

/* Application flags */
#define APP_FLAGS_NONE G_APPLICATION_DEFAULT_FLAGS

/* Booleans */
#define YES TRUE
#define NO  FALSE

/* Signals */
#define sig_connect g_signal_connect
#define sig_connect_after g_signal_connect_after

/* Main loop */
#define app_new   gtk_application_new
#define app_run   g_application_run
#define app_quit  g_application_quit
#define app_unref g_object_unref

#endif
