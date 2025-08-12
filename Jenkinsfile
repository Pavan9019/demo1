pipeline {
  agent any	
  stages {

    stage ('BUILD') {
      steps {
        echo "This is Build stage" 
        sh ''' 
		sleep 5
	        exit 0 
	   '''
      }  
    }  
    
    stage ('TEST') {
      steps {
        echo "This is Test stage" 
        sh 'sleep 5; exit 1'
      }  
    }  
    
    stage ('DEPLOY') {
      steps {
        echo "This is Deploy stage" 
        sh 'sleep 5'
      }  
    }  
  } 

}
