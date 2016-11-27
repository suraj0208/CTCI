/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
    bool isBST(Node* root,int min,int max){
        if(!root)
            return true;


        bool rootbst = root->data>min && root->data<max;

        if(!rootbst)
            return false;

        bool leftbst = isBST(root->left,min,root->data);

        if(!leftbst)
            return false;

        bool rightbst = isBST(root->right,root->data,max);

        return rightbst;



    }

   bool checkBST(Node* root) {
       #include <climits>
      return isBST(root,INT_MIN,INT_MAX);
   }
