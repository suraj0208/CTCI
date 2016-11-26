bool has_cycle(Node* head) {
    Node* f=head;
    Node* s=head;

    while( f && s && s->next ){
        f=f->next;
        s=s->next->next;

        if ( f==s )
            return true;

    }

    return false;

}
